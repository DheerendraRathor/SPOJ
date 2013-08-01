(define (ans count x y)
(if (= count 11) " "
    (begin (set! x (read)) (set! y (read)) (write (/ (+ x y) 2)) (newline)
        (write (/ (- x y) 2)) (newline) (ans (+ count 1) x y))))

(ans 1 0 0)