/* FUN_2c4a5234 @ 0x2c4a5234 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a5234(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint extraout_r1;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iStack_20;
  uint uStack_1c;
  
  uStack_1c = *_LAB_2c4a5368;
  iStack_20 = 0xa5;
  iVar1 = FUN_2c4a41bc(0x34,0xa5,param_3,0);
  if ((iVar1 == 0) || (lVar6 = FUN_2c4a41bc(0x34,0xa5), -1 < (int)lVar6)) {
    FUN_2c6444fc(0x1e);
    iStack_20 = 0xf;
    FUN_2c4a4514(0x100,&iStack_20);
    FUN_2c4a4514(0x40,&iStack_20);
    FUN_2c4a4514(0x40,&iStack_20);
    iStack_20 = 10;
    iVar1 = FUN_2c4a41bc(0xa00,10);
    if (iVar1 != 0) {
      FUN_2c4a41bc(0xa00,10);
    }
    iStack_20 = 10;
    iVar1 = FUN_2c4a41bc(0x1000);
    if (iVar1 != 0) {
      FUN_2c4a41bc(0x1000,10);
    }
    iStack_20 = 0xff;
    iVar1 = FUN_2c4a41bc(0x104);
    if (iVar1 != 0) {
      FUN_2c4a41bc(0x104,0xff);
    }
    iStack_20 = 0xf;
    iVar1 = FUN_2c4a41bc(0x100);
    if (iVar1 != 0) {
      FUN_2c4a41bc(0x100,0xf);
    }
    iVar1 = 9;
    do {
      FUN_2c4a4514(0x1004,&iStack_20);
      if (iStack_20 << 0x1b < 0) break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iStack_20 = 0;
    puVar3 = (undefined1 *)(param_1 + 0x13);
    puVar5 = (undefined4 *)(param_1 + 0x3c);
    do {
      iVar1 = iStack_20;
      iVar2 = FUN_2c4a41bc(0x100c);
      if (iVar2 != 0) {
        FUN_2c4a41bc(0x100c,iVar1);
      }
      puVar4 = puVar3 + 1;
      *puVar3 = 0;
      *puVar5 = 0;
      puVar3 = puVar4;
      puVar5 = puVar5 + 1;
    } while ((undefined1 *)(param_1 + 0x1b) != puVar4);
    iStack_20 = 0xa5;
    iVar1 = FUN_2c4a41bc(0x34);
    if ((iVar1 == 0) || (lVar6 = FUN_2c4a41bc(0x34,0xa5), -1 < (int)lVar6)) {
      FUN_2c6444fc(0x1e);
      lVar6 = (ulonglong)extraout_r1 << 0x20;
    }
  }
  if ((*_LAB_2c4a5368 ^ uStack_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),*_LAB_2c4a5368 ^ uStack_1c,0);
  }
  return;
}

