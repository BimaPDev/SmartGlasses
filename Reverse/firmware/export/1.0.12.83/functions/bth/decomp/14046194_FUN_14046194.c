/* FUN_14046194 @ 0x14046194 */

void FUN_14046194(uint param_1,byte param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8,char param_9,int param_10,
                 char param_11,int param_12,char param_13)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = DAT_14046330;
  FUN_1402a6e8(4,0x4c,DAT_1404631c,DAT_14046318,DAT_14046314,DAT_14046330,param_1,param_3);
  FUN_1402a9fc(DAT_14046320,1,6,param_4);
  if (3 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x712,DAT_14046328,uVar3,4);
  }
  FUN_14044840(param_1,(int)param_9);
  iVar2 = DAT_14046324;
  iVar7 = param_1 * 0x21c;
  iVar8 = iVar7 + 0x20d;
  iVar5 = DAT_14046324 + iVar7;
  *(byte *)(iVar5 + 3) = param_2 ^ 1;
  iVar6 = iVar2 + iVar8;
  *(char *)(iVar2 + iVar7) = (char)param_1;
  *(undefined4 *)(iVar2 + iVar8) = 0;
  *(undefined2 *)(iVar6 + 4) = 0;
  if (param_3 == 0) {
    *(undefined1 *)(iVar5 + 0x20c) = 0;
    puVar4 = (undefined4 *)FUN_140390b4();
    *(undefined4 *)(iVar2 + iVar8) = *puVar4;
    *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(puVar4 + 1);
  }
  else {
    if (1 < param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_1404632c,param_3);
    }
    *(undefined1 *)(iVar5 + 0x20c) = 1;
    *(undefined4 *)(iVar2 + iVar8) = *param_4;
    *(undefined2 *)(iVar6 + 4) = *(undefined2 *)(param_4 + 1);
  }
  if (param_5 == (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + iVar7 + 0x213) = 0;
    *(undefined4 *)(iVar7 + 0x213 + iVar2 + 3) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + iVar7 + 0x213) = *param_5;
    uVar1 = *(undefined1 *)((int)param_5 + 6);
    iVar5 = iVar7 + 0x213 + iVar2;
    *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(param_5 + 1);
    *(undefined1 *)(iVar5 + 6) = uVar1;
  }
  iVar5 = param_1 * 0x21c + iVar2;
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  *(undefined4 *)(iVar5 + 8) = param_6;
  *(undefined1 *)(iVar5 + 5) = param_7;
  *(undefined1 *)(iVar5 + 6) = param_8;
  if ((param_10 != 0) && (param_11 != '\0')) {
    FUN_140e5278(iVar7 + 0x15 + iVar2,param_10,param_11);
    *(char *)(iVar5 + 0x14) = param_11;
  }
  if ((param_12 != 0) && (param_13 != '\0')) {
    FUN_140e5278(iVar7 + 0x111 + iVar2,param_12,param_13);
    *(char *)(param_1 * 0x21c + iVar2 + 0x110) = param_13;
    return;
  }
  return;
}

