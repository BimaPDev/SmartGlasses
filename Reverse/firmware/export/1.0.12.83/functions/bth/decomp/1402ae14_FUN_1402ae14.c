/* FUN_1402ae14 @ 0x1402ae14 */

void FUN_1402ae14(uint param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_38;
  
  pcVar2 = DAT_1402af24;
  param_1 = param_1 & 0xfffffffc;
  if (DAT_1402af08 + param_1 <= DAT_1402af0c) {
    if ((*DAT_1402af24 != '\0') && (FUN_14029cb0(DAT_1402af10,1), *pcVar2 != '\0')) {
      FUN_14029cb0(DAT_1402af14,0x14);
    }
    puVar1 = DAT_1402af18;
    if (*(char *)(DAT_1402af18 + 10) != '\0') {
      iVar7 = 0;
      puVar8 = DAT_1402af18;
      do {
        (*(code *)*puVar8)(9,0);
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(puVar1 + 10));
    }
    uVar3 = DAT_1402af28;
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar7 = 0;
      uVar6 = DAT_1402af1c - param_1;
      local_38 = 0;
      do {
        iVar4 = FUN_1402a2b4(*(undefined4 *)(param_1 + iVar7 * 4));
        if (iVar4 != 0) {
          uVar5 = FUN_1402a350(uVar3,100,DAT_1402af20,iVar4);
          if (*pcVar2 != '\0') {
            FUN_14029cb0(uVar3,uVar5);
          }
          if (*(char *)(puVar1 + 10) != '\0') {
            iVar4 = 0;
            puVar8 = DAT_1402af18;
            do {
              (*(code *)*puVar8)(10,uVar3,uVar5);
              iVar4 = iVar4 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar4 < (int)(uint)*(byte *)(puVar1 + 10));
          }
          local_38 = local_38 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (((param_2 != iVar7) && (local_38 < param_3)) && ((uVar6 >> 2) + 1 != iVar7));
    }
  }
  return;
}

