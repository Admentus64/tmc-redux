	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata
    .align 2


gNPCHitboxes:: @ 08114EE4
	.4byte 00000000
	.4byte gHitbox_2
	.4byte gHitbox_30
	.4byte gHitbox_2
	.4byte gHitbox_3
	.4byte gHitbox_31

gUnk_08114EFC:: @ 08114EFC
	.4byte sub_0806EF88
	.4byte sub_0806EE70
	.4byte sub_0806EED0
	.4byte sub_0806EEF4

gUnk_08114F0C:: @ 08114F0C
	.4byte sub_0806EFAC
	.4byte sub_0806EFBC
	.4byte sub_0806EFCC
	.4byte sub_0806EFDC
	.4byte sub_0806F014
	.4byte sub_0806F02C
	.4byte sub_0806F048
	.4byte sub_0806F050
	.4byte sub_0806F064

gUnk_08114F30:: @ 08114F30
	.incbin "data_081146D0/gUnk_08114F30.bin"

gUnk_08114F34:: @ 08114F34
	.incbin "data_081146D0/gUnk_08114F34.bin"

