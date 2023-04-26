global ArrayMinimum_

ArrayMinimum_:
	; по умолчанию полагаем, что результат
	; это первый элемент массива
	mov eax, [rdi]

	; сохраняем длину массива
	mov ecx, esi
	; инициализация счетчика текущего индекса
	xor edx, edx

loop:
	; текущий элемент — базовое смещение +
	; смещение по индексу
	mov esi, [rdi + 4 * rdx]

	; сравниваем текущий элемент с текущим минимальным
	cmp esi, eax
	; если текущий элемент больше или равен текущему
	; минимальному, то не обновляем результат
	jge false_result
	mov eax, esi

false_result:
	; увеличиваем индекс
	inc edx

	; проверяем, не достигли ли мы конца
	cmp ecx, edx
	jne loop
end:
	ret
