/* FUN_2c63f6c8 @ 0x2c63f6c8 */

void FUN_2c63f6c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_r4;
  int iVar1;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_lr;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&stack0xfffffff0;
  iVar1 = 0;
  if (unaff_r4 != 0x3f) {
    iVar1 = 0;
    if (unaff_r4 == 0x7e) goto LAB_2c63f6e6;
    iVar1 = unaff_r4 + -0xbd;
    puVar2 = (undefined4 *)&stack0x00000100;
  }
  *(undefined4 *)((int)puVar2 + -4) = unaff_lr;
  *(undefined4 *)((int)puVar2 + -8) = unaff_r7;
  *(undefined4 *)((int)puVar2 + -0xc) = unaff_r6;
  *(int *)((int)puVar2 + -0x10) = unaff_r5;
  *(undefined4 *)((int)puVar2 + -0x14) = param_4;
  *(undefined4 *)((int)puVar2 + -0x18) = param_3;
  param_2 = *(undefined4 *)((int)puVar2 + 0x2f8);
  unaff_r5 = unaff_r5 + -0x6a;
  iVar1 = iVar1 + -0xbd;
  *(undefined4 *)((int)puVar2 + 0x174) = unaff_lr;
  *(undefined4 *)((int)puVar2 + 0x170) = unaff_r7;
  *(undefined4 *)((int)puVar2 + 0x16c) = unaff_r6;
  *(int *)((int)puVar2 + 0x168) = iVar1;
  *(undefined4 *)((int)puVar2 + 0x164) = param_4;
  puVar2 = (undefined4 *)((int)puVar2 + 0x160);
  *puVar2 = param_3;
LAB_2c63f6e6:
  puVar2[-1] = unaff_lr;
  puVar2[-2] = unaff_r5;
  puVar2[-3] = iVar1 + -0x3f;
  puVar2[-8] = DAT_2c63f734;
  puVar2[-7] = param_2;
  puVar2[-6] = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c63f73c,0xcb,DAT_2c63f738);
}

