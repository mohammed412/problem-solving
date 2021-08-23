def sort_n(arr):
    # when we store all sorted elements
    new_arr = []

    # taking the "min & max & mid" in array "with" thier "indexes"
    min = {"value": 0, "index": 0}
    mid = {"value": 0, "index": 0}
    max = {"value": 0, "index": 0}

    # loop over all "one by one"
    for i in range(len(arr)):

        # when we start
        if i == 0:
            # set element 0 in array as min
            min["index"] = i
            min["value"] = arr[i]

            # set element 0 in array as mid
            mid["index"] = i
            mid["value"] = arr[i]

            # set element 0 in array as max
            max["index"] = i
            max["value"] = arr[i]

            # append first one direct to the new array
            new_arr.append(arr[i])

        # in case element smaller or equal min
        elif arr[i] <= min["value"]:

            # insert new min at position 0
            new_arr.insert(min["index"], arr[i])

            # set new min
            min["value"] = arr[i]
            # update max position
            max["index"] += 1
            # max["index"] = new_arr.index(max["value"])

        # in case element bigger or equal max
        elif arr[i] >= max["value"]:
            # push new max in "new array"
            new_arr.insert(max["index"]+1, arr[i])

            # set new max
            max["index"] += 1
            # max["index"] = new_arr.index(arr[i])
            max["value"] = arr[i]

        # in case element between min & max
        else:
            # in case mid in 0
            if mid["index"] == 0:

                # insert element at position => (max - (min / 2) )
                new_arr.insert(int(max["index"] - (min["index"]/2)), arr[i])

                # set new mid
                mid["index"] = i
                mid["value"] = arr[i]

                # update max position
                max["index"] += 1
                # max["index"] = new_arr.index(max["value"])

            # in case mid less than or equal element
            elif mid["value"] <= arr[i]:

                # insert in new array in mid position
                new_arr.insert(mid["index"], arr[i])

                # update max position
                max["index"] += 1
                # max["index"] = new_arr.index(max["value"])

            # in case mid greather than or equal element
            elif mid["value"] >= arr[i]:

                # insert at (index + 1) position
                new_arr.insert(mid["index"]+1, arr[i])

                # update max position
                max["index"] += 1
                # max["index"] = new_arr.index(max["value"])

    # return sorted array
    return new_arr


arr = [100, 7, 4, 5, 3, 13, 2, 1]

print("== output ==")
print(sort_n(arr))
