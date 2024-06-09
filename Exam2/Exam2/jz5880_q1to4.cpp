/**
 Question 1
    prove for base case: n = 1, 1^3 + 2 = 3, which is divisiable by 3. Therefore P(1) is true
    inductive step: assume k >= 1,  P(k) = k^3 + 2k, which is divisiable by 3. (function defination)
                We want to prove P(k + 1) = (k+1)^3 + 2(k+1) is also divisiable by 3.
  P(k + 1) = (k+1)^3 + 2(k+1)
        = k^3 + 3K^2 + 3k + 1 + 2k + 2
        =(K^3 + 2k) + (3k^2 + 3k + 3)
        since (K^3 + 2k) is P(k), which is divisiable by 3, (3k^2 + 3k + 3) is also divisiable by 3. Therefore,
        P(k+1) is  divisiable by 3.
 
 
 
 
 Question 2
 a).
 2^5 + 2^4 - 2^2  = 32 + 16 - 4 = 36
 
 
 b).
 5! * c(6, 4) = 120 *c(6, 4)
 
 
 
 
 Question 3
 a). C(n, 1) / 2^n
 
 b). P(prime number) = 3/7 (prime number: 3, 5, 7)
   P(composite number) = 4/7(ex: 4,6,8,9)
   E(x) = 3/7 * 1 - 4/7 * 1 = - 1 / 7
 
 Question 4
 function 1
 the first while loop's run time dependent on i which doubles every iteration
 the total runtime is equal to 2^0 + 2^1 + 2^2 + ... 2^k where 2^k = n, k = log(n)
 according to geomertric series runtime = 2^(k + 1) - 1, Θ(2^k) = Θ(n)
 
 the second loop's has outter loop has iterating  i which doubles every iteration
 the inner loop j is depent on i, the  total runtime is equal to 2^0 + 2^1 + 2^2 + ... 2^k, where 2^k = n
 according to geomertric series runtime =  2^(k + 1) - 1, Θ(2^k) = Θ(n);
 Total tuntime = Θ(n) + Θ(n) = Θ(n)
 
 
 function 2
 the first for loop's run time dependent on i which increments by 2 every iteration
 the runtime for the for loop is Θ(n), since it only has one loop and increment to n/2
 
 the second for loop's run time dependent on i which doubles every iteration;
 the inner loop j is depent on i, the  total runtime is equal to log(2^0) + 1 +  log(2^1) + 1  log(2^2) + 1 ...  log(2^k),
 where 2^k = n
 the total runtime is equal to (0 + 1 + 2 +... k) + k which equals k^2 / 2 + k,
 that has run time complexity of Θ(k^2), since k = log(n), Θ(l(ogn)^2)
 total runtime = Θ(n) +  Θ(l(ogn)^2) = Θ(n)

 
 */
