/* FUN_14044fbc @ 0x14044fbc */

void FUN_14044fbc(int param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  int iVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  uint uVar11;
  
  FUN_1402a6e8(4,0x7b0,DAT_14045044,DAT_14045040,DAT_1404503c,DAT_14045038,param_1,param_3);
  iVar6 = DAT_14045048;
  uVar11 = param_3;
  if (7 < param_3) {
    uVar11 = 8;
  }
  iVar10 = DAT_14045048 + param_1 * 0x3a;
  *(char *)(iVar10 + 0xc89) = (char)uVar11;
  *(undefined1 *)(iVar10 + 0xc88) = 1;
  if (param_3 != 0) {
    bVar9 = 0;
    puVar8 = (undefined4 *)(iVar6 + param_1 * 0x3a + 0xc8a);
    do {
      bVar9 = bVar9 + 1;
      *puVar8 = *param_2;
      uVar1 = *(undefined1 *)((int)param_2 + 6);
      *(undefined2 *)(puVar8 + 1) = *(undefined2 *)(param_2 + 1);
      *(undefined1 *)((int)puVar8 + 6) = uVar1;
      param_2 = (undefined4 *)((int)param_2 + 7);
      puVar8 = (undefined4 *)((int)puVar8 + 7);
    } while (bVar9 < uVar11);
  }
  puVar4 = DAT_14043cf4;
  pcVar3 = DAT_14043cf0;
  FUN_1402a6e8(4,0x770,DAT_14043d04,DAT_14043d00,DAT_14043cfc,DAT_14043cf8,*DAT_14043cf0,
               *DAT_14043cf4,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  iVar6 = FUN_140e5148(*(undefined4 *)(pcVar3 + 0xe42),0xffffffff);
  puVar5 = DAT_14043d08;
  if (iVar6 == 0) {
    if (*pcVar3 != '\0') {
      uVar7 = *(undefined4 *)(pcVar3 + 0xe42);
      uVar2 = *DAT_14043d08;
      pcVar3[0xc87] = '\x01';
      *puVar5 = uVar2 | 0x80;
      FUN_140e52d8(uVar7);
      return;
    }
    uVar7 = *(undefined4 *)(pcVar3 + 0xe42);
    uVar2 = *DAT_14043d08;
    *puVar4 = 7;
    *puVar5 = uVar2 & 0xff7f;
    *pcVar3 = '\x01';
    FUN_140e52d8(uVar7);
    FUN_14048958(0,0,DAT_14043d0c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x710,DAT_14043d10);
}

