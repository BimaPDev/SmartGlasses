/* FUN_14053f18 @ 0x14053f18 */

void FUN_14053f18(undefined4 param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                 char param_7,undefined2 *param_8,short *param_9)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  undefined2 *puVar10;
  
  if (param_2 != 0) {
    uVar5 = 0;
    do {
      iVar9 = param_3 + uVar5 * 0x16;
      if (*(char *)(param_3 + uVar5 * 0x16) == '\x04') {
        uVar2 = *(undefined2 *)(iVar9 + 0x12);
        uVar1 = *(undefined1 *)(iVar9 + 0x14);
        if (param_4 == 0) goto LAB_14053f4a;
        uVar6 = 0;
        do {
          puVar10 = (undefined2 *)(param_6 + uVar6 * 4);
          if ((*(short *)(param_6 + uVar6 * 4) == 0) &&
             (iVar4 = FUN_14065c10(iVar9 + 2,*(undefined1 *)(iVar9 + 1),
                                   *(undefined2 *)(param_5 + uVar6 * 4)), iVar4 != 0)) {
            *puVar10 = uVar2;
            *(undefined1 *)(puVar10 + 1) = uVar1;
            goto LAB_14053fde;
          }
          uVar6 = uVar6 + 1;
        } while (param_4 != uVar6);
        uVar5 = uVar5 + 1 & 0xff;
      }
      else {
LAB_14053f4a:
        uVar5 = uVar5 + 1 & 0xff;
      }
LAB_14053f4e:
    } while (uVar5 < param_2);
  }
  return;
LAB_14053fde:
  uVar5 = uVar5 + 1 & 0xff;
  iVar9 = param_3 + uVar5 * 0x16;
  if (*(char *)(param_3 + uVar5 * 0x16) == '\x06') {
    if (param_7 == '\0') {
      if ((int)(param_2 - 1) <= (int)uVar5) goto LAB_14053f4e;
      goto LAB_14053fde;
    }
    psVar7 = param_9;
    puVar10 = param_8;
    do {
      psVar8 = psVar7 + 1;
      if (((*psVar7 == 0) && ((uint)*(byte *)((int)puVar10 + 3) == (uVar6 & 0xff))) &&
         (iVar4 = FUN_14065c10(iVar9 + 2,*(undefined1 *)(iVar9 + 1),*puVar10), iVar4 != 0)) {
        sVar3 = *(short *)(iVar9 + 0x12);
        *psVar7 = sVar3;
        FUN_1402a6e8(4,0x11b,DAT_140540a4,DAT_140540a8,DAT_140540a0,DAT_1405409c,sVar3);
        break;
      }
      puVar10 = puVar10 + 2;
      psVar7 = psVar8;
    } while (psVar8 != param_9 + (byte)(param_7 - 1) + 1);
  }
  if (((int)(param_2 - 1) <= (int)uVar5) || (*(byte *)(param_3 + uVar5 * 0x16) - 3 < 2))
  goto LAB_14053f4e;
  goto LAB_14053fde;
}

