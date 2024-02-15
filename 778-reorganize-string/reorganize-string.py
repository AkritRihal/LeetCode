class Solution:
    def reorganizeString(self, s: str) -> str:

        # Create a hashmap to store frequency of words
        hashm={}
        res=""
        for i in s:
            if i in hashm:
                hashm[i]+=1
            else:
                hashm[i]=1

        # Maxheap
        h=[]
        for i in hashm:
            heapq.heappush(h,[-hashm[i],i])

        # Basically following a greedy approach where we keep on adding higher frequcny chars to result string.
        
        # Intilaaly add most repeated charecter to result
        temp=heapq.heappop(h)
        res+=temp[1]
        if temp[0]+1:
            heapq.heappush(h,[temp[0]+1,temp[1]])

        while h:

            # Check if last charecter of result matches firstchar in heap i.e; highest count one

            # If it doesnt match add to result
            if res[-1]!=h[0][1]:
                temp=heapq.heappop(h)
                res+=temp[1]
                if temp[0]+1:
                    heapq.heappush(h,[temp[0]+1,temp[1]])
            else:

                # This means there is only one char in heap and this matches with last char in result i.e; we get two same chars even after appending to result. So return empty string
                if len(h)==1:
                    return ""

                # Else, add second elemnt in heap to result 
                else:
                    temp1=heapq.heappop(h)
                    temp2=heapq.heappop(h)
                    res+=temp2[1]
                    if temp2[0]+1:
                        heapq.heappush(h,[temp2[0]+1,temp2[1]])
                    heapq.heappush(h,[temp1[0],temp1[1]])
        
        return res


        


            

        