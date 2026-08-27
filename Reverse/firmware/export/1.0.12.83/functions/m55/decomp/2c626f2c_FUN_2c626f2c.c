/* FUN_2c626f2c @ 0x2c626f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c626f2c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_11c [256];
  int iStack_1c;
  
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  iStack_1c = *_LAB_2c626ff0;
  if ((int)(param_3 << 0x1e) < 0) {
    uVar3 = uVar3 | 1;
  }
  if ((param_3 & 4) != 0) {
    uVar3 = 3;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    uVar3 = uVar3 | 0x100;
  }
  if ((int)(param_3 << 0x1b) < 0) {
    uVar3 = uVar3 | 0x200;
  }
  if ((int)(param_3 << 0x1a) < 0) {
    uVar3 = uVar3 | 0x400;
  }
  if ((int)(param_3 << 0x19) < 0) {
    uVar3 = uVar3 | 0x800;
  }
  iVar1 = lv_mem_alloc(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c627000,0x84,_LAB_2c626ffc,_LAB_2c627004);
  }
  FUN_2c62c3b0(iVar1,0x54);
  FUN_2c62dbd4(auStack_11c,0x100,_LAB_2c626ff4,param_2);
  iVar2 = FUN_2c4f4710(*(undefined4 *)(param_1 + 0x30),iVar1,auStack_11c,uVar3);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c627000,0x8f,_LAB_2c626ffc,_LAB_2c626ff8,auStack_11c);
  }
  if (*_LAB_2c626ff0 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar1;
}

