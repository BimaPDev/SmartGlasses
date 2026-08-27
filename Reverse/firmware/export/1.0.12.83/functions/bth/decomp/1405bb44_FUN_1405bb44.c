/* FUN_1405bb44 @ 0x1405bb44 */

void FUN_1405bb44(uint param_1,int param_2,uint param_3,byte param_4)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 *local_28;
  int local_24;
  
  iVar4 = DAT_1405bc74;
  local_24 = *DAT_1405bc6c;
  if (param_1 < 2) {
    iVar8 = *(int *)(DAT_1405bc70 + param_1 * 4);
  }
  else {
    iVar8 = 0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(iVar8 + 0x39) = 0;
    uVar6 = param_1 >> 3;
    bVar2 = (byte)(1 << (param_1 & 7));
    *(byte *)(uVar6 + iVar4) = *(byte *)(uVar6 + iVar4) & ~bVar2;
    *(byte *)(uVar6 + iVar4 + 1) = bVar2 | *(byte *)(uVar6 + iVar4 + 1);
    *(byte *)(uVar6 + iVar4 + 2) = bVar2 | *(byte *)(uVar6 + iVar4 + 2);
  }
  else {
    *(byte *)(iVar8 + 0x39) = param_4 & 7;
    uVar6 = param_1 >> 3;
    uVar9 = param_1 & 7;
    bVar3 = (byte)((((param_3 ^ 2) & 3) >> 1) << uVar9);
    bVar2 = (byte)(1 << uVar9);
    *(byte *)(uVar6 + iVar4) = *(byte *)(uVar6 + iVar4) & ~bVar2 | (byte)((param_3 & 1) << uVar9);
    *(byte *)(uVar6 + iVar4 + 1) = *(byte *)(uVar6 + iVar4 + 1) & ~bVar2 | bVar3;
    *(byte *)(uVar6 + iVar4 + 2) = bVar3 | *(byte *)(uVar6 + iVar4 + 2) & ~bVar2;
    if (((param_3 & 3) == 3) &&
       (iVar8 = FUN_14073468(&local_28,7,4,0), iVar4 = DAT_1405bc70, iVar8 == 0)) {
      puVar7 = local_28;
      if (local_28 != (undefined1 *)0x0) {
        puVar7 = local_28 + *(ushort *)(local_28 + 6) + 0x30;
      }
      *puVar7 = 1;
      puVar7[2] = 0xff;
      puVar7[3] = 0xff;
      puVar7[1] = 0;
      uVar1 = *(undefined1 *)(iVar4 + 0x2d);
      uVar5 = FUN_14064228();
      FUN_14065550(param_1,uVar1,uVar5,1,*(short *)(iVar4 + 0x28) + 2,local_28);
      FUN_140735a8(local_28);
    }
  }
  if (*DAT_1405bc6c != local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

