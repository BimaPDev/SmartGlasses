/* FUN_2c139360 @ 0x2c139360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c139360(int param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  int aiStack_44 [2];
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  int iStack_24;
  
  iStack_24 = *_DAT_2c139400;
  aiStack_44[0]._0_1_ = (undefined1)param_1;
  uVar1 = (undefined1)aiStack_44[0];
  uVar6 = param_3 & 0xffff;
  aiStack_44[0] = param_1;
  aiStack_44[1] = param_2;
  uStack_3c = param_3;
  if ((param_2 == 0) || (uVar6 == 0)) {
    uVar5 = 0xe;
    puVar7 = &uStack_34;
    uStack_34 = *_DAT_2c139404;
    uStack_30 = _DAT_2c139404[1];
    uStack_2c = _DAT_2c139404[2];
    uStack_28 = (undefined1)_DAT_2c139404[3];
    uStack_27 = (undefined1)aiStack_44[0];
  }
  else {
    uVar5 = uVar6 + 0xe & 0xffff;
    iVar2 = -(uVar5 + 7 & 0xfffffff8);
    puVar7 = (undefined4 *)((int)&uStack_48 + iVar2);
    FUN_2c13e9dc(puVar7,0,uVar5);
    *(undefined1 *)((int)&uStack_3c + iVar2 + 1) = uVar1;
    uVar3 = _DAT_2c139404[1];
    uVar4 = _DAT_2c139404[2];
    uVar1 = *(undefined1 *)(_DAT_2c139404 + 3);
    *puVar7 = *_DAT_2c139404;
    *(undefined4 *)((int)aiStack_44 + iVar2) = uVar3;
    *(undefined4 *)((int)aiStack_44 + iVar2 + 4) = uVar4;
    *(undefined1 *)((int)&uStack_3c + iVar2) = uVar1;
    FUN_2c13e7f0((int)&uStack_3c + iVar2 + 2,param_2,uVar6);
  }
  func_0x2c139acc(2,puVar7,uVar5);
  if (*_DAT_2c139400 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}

