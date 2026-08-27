/* FUN_14058998 @ 0x14058998 */

void FUN_14058998(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = DAT_14058a40;
  if (*(undefined4 **)(DAT_14058a40 + 0x38) != (undefined4 *)0x0) {
    iVar7 = DAT_14058a40 + 0x38;
    puVar6 = *(undefined4 **)(DAT_14058a40 + 0x38);
    do {
      while (puVar5 = (undefined4 *)*puVar6, *(byte *)(puVar6 + 1) != param_1) {
        puVar6 = puVar5;
        if (puVar5 == (undefined4 *)0x0) goto LAB_140589ba;
      }
      FUN_14073a6c(iVar7,puVar6);
      *puVar6 = 0xffffffff;
      puVar6 = puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
LAB_140589ba:
  uVar2 = DAT_14058a48;
  if (*(undefined4 **)(iVar1 + 0x44) != (undefined4 *)0x0) {
    bVar3 = true;
    puVar6 = *(undefined4 **)(iVar1 + 0x44);
    do {
      while (puVar5 = (undefined4 *)*puVar6, *(byte *)(puVar6 + 1) == param_1) {
        if (bVar3) {
          *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) | 1;
        }
        FUN_14073a6c(uVar2,puVar6);
        bVar3 = false;
        *puVar6 = 0xffffffff;
        puVar6 = puVar5;
        if (puVar5 == (undefined4 *)0x0) goto LAB_140589f8;
      }
      bVar3 = false;
      puVar6 = puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
LAB_140589f8:
  uVar2 = DAT_14058a44;
  uVar4 = (uint)*(byte *)(iVar1 + 0x4e);
  if ((-1 < (int)(uVar4 << 0x1d)) && (*(int *)(iVar1 + 0x38) == 0)) {
    *(byte *)(iVar1 + 0x4e) = *(byte *)(iVar1 + 0x4e) & 0xfd;
    FUN_14072abc(0,uVar2);
    uVar4 = (uint)*(byte *)(iVar1 + 0x4e);
  }
  if ((uVar4 & 9) == 1) {
    FUN_14058610();
    return;
  }
  return;
}

