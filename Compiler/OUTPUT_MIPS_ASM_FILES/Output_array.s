main:

jal Label_0_main

Label_0_main:

	addi $fp,$sp,40

	li $t0,-4

	add $t0,$fp,$t0

	addi $sp,$sp,-4

	sw $t0,0($sp)

	addi $sp,$sp,-4

	sw $t1,0($sp)

	addi $sp,$sp,-4

	sw $t2,0($sp)

	addi $sp,$sp,-4

	sw $t3,0($sp)

	addi $sp,$sp,-4

	sw $t4,0($sp)

	addi $sp,$sp,-4

	sw $t5,0($sp)

	addi $sp,$sp,-4

	sw $t6,0($sp)

	addi $sp,$sp,-4

	sw $t7,0($sp)

	li $t0,6

	addi $sp,$sp,-4

	sw $t0,0($sp)

	li $t0,8

	addi $sp,$sp,-4

	sw $t0,0($sp)

	jal Label_2_AllocateArray

	addi $sp,$sp,8

	lw $t7,0($sp)

	addi $sp,$sp,4

	lw $t6,0($sp)

	addi $sp,$sp,4

	lw $t5,0($sp)

	addi $sp,$sp,4

	lw $t4,0($sp)

	addi $sp,$sp,4

	lw $t3,0($sp)

	addi $sp,$sp,4

	lw $t2,0($sp)

	addi $sp,$sp,4

	lw $t1,0($sp)

	addi $sp,$sp,4

	lw $t0,0($sp)

	addi $sp,$sp,4

	sw $v0,0($t0)

	li $t0,-4

	add $t2,$fp,$t0

	lw $t1,0($t2)

	li $t0,0

	beq $t1, $t0, Label_7_access_violation

	bne $t1, $t0, Label_9_initialization_ok

Label_9_initialization_ok:

	li $t1,2

	li $t0,0

	bge $t1, $t0, Label_10_subscript_ge_than_zero_ok

	blt $t1, $t0, Label_7_access_violation

Label_10_subscript_ge_than_zero_ok:

	li $t1,2

	li $t0,-4

	add $t2,$fp,$t0

	lw $t3,0($t2)

	lw $t2,0($t3)

	ble $t1, $t2, Label_11_subscript_le_than_actual_memory_size_allocated_on_heap

	bgt $t1, $t2, Label_7_access_violation

Label_11_subscript_le_than_actual_memory_size_allocated_on_heap:

	j Label_8_everything_is_ok

Label_7_access_violation:

	addi $sp,$sp,-4

	sw $t0,0($sp)

	addi $sp,$sp,-4

	sw $t1,0($sp)

	addi $sp,$sp,-4

	sw $t2,0($sp)

	addi $sp,$sp,-4

	sw $t3,0($sp)

	addi $sp,$sp,-4

	sw $t4,0($sp)

	addi $sp,$sp,-4

	sw $t5,0($sp)

	addi $sp,$sp,-4

	sw $t6,0($sp)

	addi $sp,$sp,-4

	sw $t7,0($sp)

	jal Label_4_Access_Violation

	addi $sp,$sp,0

	lw $t7,0($sp)

	addi $sp,$sp,4

	lw $t6,0($sp)

	addi $sp,$sp,4

	lw $t5,0($sp)

	addi $sp,$sp,4

	lw $t4,0($sp)

	addi $sp,$sp,4

	lw $t3,0($sp)

	addi $sp,$sp,4

	lw $t2,0($sp)

	addi $sp,$sp,4

	lw $t1,0($sp)

	addi $sp,$sp,4

	lw $t0,0($sp)

	addi $sp,$sp,4

Label_8_everything_is_ok:

	li $t0,-4

	add $t1,$fp,$t0

	lw $t2,0($t1)

	li $t1,4

	li $t3,2

	li $t0,1

	add $t4,$t3,$t0

	mul $t3,$t1,$t4

	add $t1,$t2,$t3

	li $t0,9

	sw $t0,0($t1)

	li $v0,10

	syscall
	Label_1_AllocateRecord:

	lw $t1,4($sp)

	li $t2,4

	mul $a0,$t1,$t2

	li $v0,9

	syscall

	li $t1,0

	addi $t2,$v0,0

	lw $t3,4($sp)

	li $t4,4

	addi $t5,$sp,8

	Label_12_Loop_Entry_Point:

	bge $t1, $t3, Label_3_Exit_Loop

	lw $t6, 0($t5)

	sw $t6, 0($t2)

	addi $t1,$t1,1

	addi $t2, $t2,4

	addi $t5, $t5,4

	j Label_12_Loop_Entry_Point

	Label_3_Exit_Loop:

	jr $ra

Label_2_AllocateArray:

	lw $t1,4($sp)

	li $t2,4

	mul $a0,$t1,$t2

	addi $a0,$a0,4 

	li $v0,9

	syscall

	lw $t0,4($sp)

	sw $t0,0($v0)

	addi $v0,$v0,4

	addi $t0, $v0, 0

	lw $t1, 4($sp)

	lw $t2, 8($sp)

	li $t3,0

	Label_5_LoopEntryPoint:

	bge $t3,$t1,Label_6_ExitLoop

	sw $t2,0($t0)

	addi $t3,$t3,1

	addi $t0,$t0,4

	j Label_5_LoopEntryPoint

Label_6_ExitLoop:

	jr $ra

Label_3_PrintInt:

	lw $a0,0($sp)

	li $v0,1

	syscall

	li $a0,32

	li $v0,11

	syscall

	jr $ra

Label_4_Access_Violation:

	li $a0,65

	li $v0,11

	syscall

	li $a0,99

	li $v0,11

	syscall

	li $a0,99

	li $v0,11

	syscall

	li $a0,101

	li $v0,11

	syscall

	li $a0,115

	li $v0,11

	syscall

	li $a0,115

	li $v0,11

	syscall

	li $a0,32

	li $v0,11

	syscall

	li $a0,86

	li $v0,11

	syscall

	li $a0,105

	li $v0,11

	syscall

	li $a0,111

	li $v0,11

	syscall

	li $a0,108

	li $v0,11

	syscall

	li $a0,97

	li $v0,11

	syscall

	li $a0,116

	li $v0,11

	syscall

	li $a0,105

	li $v0,11

	syscall

	li $a0,111

	li $v0,11

	syscall

	li $a0,110

	li $v0,11

	syscall

	li $v0,10

	syscall

