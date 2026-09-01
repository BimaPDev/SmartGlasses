/* FUN_100a7d20 @ 0x100a7d20 */

undefined4 FUN_100a7d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int extraout_r2;
  int iVar7;
  
  iVar2 = DAT_100a7d7c;
  piVar1 = DAT_100a7d78;
  iVar6 = *DAT_100a7d78;
  if (iVar6 == 0) {
    uVar4 = 0xfffffffd;
  }
  else {
    iVar7 = param_1;
    if (param_1 == *(int *)(iVar6 + 0x14)) {
      *(char *)(iVar6 + 0x24) = *(char *)(iVar6 + 0x24) + -1;
      iVar3 = DAT_100a7d80;
      *(undefined4 *)(iVar6 + 0x14) = 0;
      iVar7 = 0;
      FUN_100a5b78((iVar2 - iVar3) * 0x20 & 0xff00U | 0xdb0032,DAT_100a7d88,DAT_100a7d84,param_1,0,
                   param_2,param_3);
      iVar6 = extraout_r2;
    }
    puVar5 = *(undefined1 **)(*piVar1 + 0x14);
    uVar4 = 0;
    if (puVar5 != (undefined1 *)0x0) {
      FUN_100a7b2c(*puVar5,*(undefined2 *)(puVar5 + 10),iVar6,*piVar1,iVar7);
      uVar4 = 0;
    }
  }
  return uVar4;
}

