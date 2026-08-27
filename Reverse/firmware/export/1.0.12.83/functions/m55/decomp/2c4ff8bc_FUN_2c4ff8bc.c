/* FUN_2c4ff8bc @ 0x2c4ff8bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c4ff8bc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _LAB_2c4ff9a4;
  *(undefined1 *)((int)param_1 + 0x16) = 1;
  param_1[8] = iVar2;
  *(undefined1 *)((int)param_1 + 0x62) = 1;
  param_1[0x1b] = iVar2;
  param_1[4] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = 0x7fffffff;
  param_1[0x13] = 0x7fffffff;
  param_1[0x28] = (int)(param_1 + 2);
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x29] = (int)(param_1 + 0x15);
  param_1[0x20] = 0x7fffffff;
  param_1[0x21] = 0;
  param_1[0x26] = 0x7fffffff;
  param_1[0x27] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_2c5d78f0();
  FUN_2c5d7eec(uVar1,_LAB_2c4ff9ac,_LAB_2c4ff9a8,0,0);
  func_0x2c63b4b8(_DAT_2c4ff9b0);
  *(undefined1 *)((int)param_1 + 5) = 7;
  iVar2 = FUN_2c5fd09c();
  *param_1 = iVar2;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c4ff9cc,0x58,_LAB_2c4ff9c8,_LAB_2c4ff9c4,_LAB_2c4ff9d0);
  }
  iVar2 = FUN_2c5fd0c0(iVar2,0,_LAB_2c4ff9bc,_DAT_2c4ff9b8,param_1,_LAB_2c4ff9b4,0x14);
  *(char *)(param_1 + 1) = (char)iVar2;
  if (iVar2 != -1) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c4ff9cc,0x5b,_LAB_2c4ff9c8,_LAB_2c4ff9c4,_LAB_2c4ff9c0);
}

