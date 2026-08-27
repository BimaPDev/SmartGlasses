/* FUN_2c5917dc @ 0x2c5917dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5917dc(void)

{
  undefined4 *puVar1;
  uint unaff_r5;
  int unaff_r9;
  int unaff_r11;
  uint in_stack_00000010;
  undefined1 *in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_000000b0;
  uint in_stack_000000d4;
  
  if ((unaff_r11 + unaff_r5 != 0) && (unaff_r11 == 0)) goto LAB_2c591ab0;
  in_stack_00000010 = unaff_r5;
  if (unaff_r5 < 0x10) {
    if ((unaff_r5 != 1) && (unaff_r5 != 0)) goto LAB_2c591a16;
  }
  else {
    in_stack_000000b0 = FUN_2c58d6c0(&stack0x00000010,0);
LAB_2c591a16:
    FUN_2c674668();
    unaff_r9 = in_stack_000000b0;
  }
  puVar1 = &stack0x000000d4;
  *(undefined1 *)(unaff_r9 + in_stack_00000010) = 0;
  if (in_stack_00000094 != (undefined1 *)-in_stack_00000098 &&
      in_stack_00000094 == (undefined1 *)0x0) {
LAB_2c591ab0:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c591b88);
  }
  in_stack_00000010 = in_stack_00000098;
  if (in_stack_00000098 < 0x10) {
    if (in_stack_00000098 == 1) {
      in_stack_000000d4 = CONCAT31(in_stack_000000d4._1_3_,*in_stack_00000094);
      goto LAB_2c59184c;
    }
    if (in_stack_00000098 == 0) goto LAB_2c59184c;
  }
  else {
    puVar1 = (undefined4 *)FUN_2c58d6c0(&stack0x00000010,0);
    in_stack_000000d4 = in_stack_00000010;
  }
  FUN_2c674668(puVar1,in_stack_00000094,in_stack_00000098);
LAB_2c59184c:
  *(undefined1 *)((int)puVar1 + in_stack_00000010) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c591a50,400,_LAB_2c591a54,_LAB_2c591a58,_LAB_2c591a54);
}

