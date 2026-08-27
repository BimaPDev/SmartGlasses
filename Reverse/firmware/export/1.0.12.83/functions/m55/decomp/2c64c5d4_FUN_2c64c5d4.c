/* FUN_2c64c5d4 @ 0x2c64c5d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c64c5d4(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  int iStack_14;
  
  puVar2 = _LAB_2c64c6f0;
  puVar1 = _LAB_2c64c6e4;
  iStack_14 = *_LAB_2c64c6e0;
  uStack_1c = 0;
  uStack_18 = 0;
  auStack_20[0] = 0;
  uStack_16 = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    if (*(char *)((int)param_1 + 3) == '\0') {
      FUN_2c644044(*_LAB_2c64c6e4,0xffffffff);
      uVar3 = FUN_2c673ef8(_LAB_2c64c6e8);
      uVar4 = (uint)(ushort)param_1[2];
      if (uVar3 < uVar4 + 1) {
        FUN_2c6741e8(0x1190,_LAB_2c64c700);
        uVar4 = uVar3 - 1;
      }
      FUN_2c674238(_LAB_2c64c6e8,param_1 + 3,uVar4);
      FUN_2c644080(*puVar1);
      FUN_2c644100(*_LAB_2c64c6ec,0x800);
    }
  }
  else if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)((int)param_1 + 3) == '\0') {
      FUN_2c644044(*_LAB_2c64c6f0,0xffffffff);
      uVar3 = FUN_2c673ef8(_LAB_2c64c6f4);
      uVar4 = (uint)(ushort)param_1[2];
      if (uVar3 < uVar4 + 1) {
        FUN_2c6741e8(0x1190,_LAB_2c64c6fc);
        uVar4 = uVar3 - 1;
      }
      FUN_2c674238(_LAB_2c64c6f4,param_1 + 3,uVar4);
      FUN_2c674238(_LAB_2c64c6f4,auStack_20,1);
      FUN_2c644080(*puVar2);
      FUN_2c644100(*_LAB_2c64c6ec,0x1000);
      uStack_18 = 0;
      uStack_1c = CONCAT13(1,CONCAT12(1,*param_1));
      func_0x2c4f6890(1,0x14,&uStack_1c,6);
    }
    else if (*(char *)((int)param_1 + 3) == '\x01') {
      FUN_2c64723c(*_DAT_2c64c6f8);
    }
  }
  if (*_LAB_2c64c6e0 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

