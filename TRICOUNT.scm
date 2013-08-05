(define (triangle n)
  (write (floor (/ (* n (+ n 2)(+ (* 2 n)  1)) 8))
  ))
  (define x (read))
  (define y 0)
(define (final x)
(if(= x 0) " "
(begin (set! y (read)) (triangle y) (newline) (final (- x 1)))))
(final x)
