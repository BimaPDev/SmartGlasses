/* FUN_1403feb4 @ 0x1403feb4 */

undefined4 FUN_1403feb4(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)param_2[4];
  uVar8 = (uint)*(ushort *)(param_2 + 2);
  FUN_1402a6e8(4,0x191,DAT_140400e8,DAT_140400e4,DAT_140400e0,*param_2,uVar8,uVar7);
  bVar1 = *param_2;
  if (bVar1 < 0xa1) {
    if (bVar1 < 0x53) {
      if (bVar1 == 3) {
        if (*(short *)(param_2 + 2) != 0) {
          FUN_1402a6e8(4,0x1ee,DAT_140400e8,DAT_140400e4,DAT_14040110,0x1ee,DAT_14040108,3,
                       *(short *)(param_2 + 2));
        }
        FUN_140747b4(0,1);
        FUN_14041e80();
      }
      else if (bVar1 == 0x30) {
        FUN_1402a6e8(4,0x24c,DAT_140400e8,DAT_140400e4,DAT_140400ec,*(undefined2 *)(param_2 + 2),
                     uVar8,uVar7);
        if (*(short *)(param_2 + 2) == 0x47) {
          FUN_14042c20(0);
        }
      }
      else if (bVar1 == 1) {
        if (*(short *)(param_2 + 2) == 0) {
          puVar2 = (undefined1 *)FUN_14074378(0xd04,4,0,0x38);
          uVar5 = DAT_140400f8;
          uVar4 = DAT_140400f4;
          *(undefined4 *)(puVar2 + 0x24) = DAT_140400f0;
          *(undefined4 *)(puVar2 + 0x28) = uVar4;
          iVar3 = DAT_140400fc;
          *puVar2 = 3;
          *(undefined4 *)(puVar2 + 4) = uVar5;
          puVar2[0x1e] = 4;
          uVar6 = *(undefined4 *)(iVar3 + 0x42d);
          uVar4 = *(undefined4 *)(iVar3 + 0x431);
          uVar5 = *(undefined4 *)(iVar3 + 0x435);
          *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(iVar3 + 0x429);
          *(undefined4 *)(puVar2 + 0x12) = uVar6;
          *(undefined4 *)(puVar2 + 0x16) = uVar4;
          *(undefined4 *)(puVar2 + 0x1a) = uVar5;
          FUN_140743d0();
        }
        else {
          FUN_1402a6e8(4,0x1cf,DAT_140400e8,DAT_140400e4,DAT_1404010c,0x1cf,DAT_14040108,uVar7);
        }
      }
    }
    else {
      switch(bVar1) {
      case 0x53:
        FUN_1402a6e8(4,0x255,DAT_140400e8,DAT_140400e4,DAT_14040100,*(undefined2 *)(param_2 + 2),
                     uVar8,uVar7);
        FUN_14045e20();
        break;
      case 0x54:
        FUN_1402a6e8(4,0x25b,DAT_140400e8,DAT_140400e4,DAT_14040104,*(undefined2 *)(param_2 + 2),
                     uVar8,uVar7);
        FUN_14045c9c(*(undefined2 *)(param_2 + 2));
        break;
      case 0x60:
        if (*(short *)(param_2 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_14040130,DAT_1404012c);
        }
        bVar1 = param_2[4];
        if (*(char *)(DAT_140400fc + (uint)bVar1 + 1) == '\0') {
          *(byte *)(DAT_140400fc + (uint)*(byte *)(DAT_140400fc + 0x15) + 0xc) = bVar1;
        }
        FUN_14041f98((uint)bVar1,1);
        FUN_14042e00(param_2[4],param_2[2]);
        break;
      case 0x61:
        if (*(short *)(param_2 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_14040138,DAT_1404012c);
        }
        bVar1 = param_2[4];
        if (*(char *)(DAT_140400fc + (uint)bVar1 + 1) == '\0') {
          *(byte *)(DAT_140400fc + 0x10) = bVar1;
        }
        FUN_14041f98((uint)bVar1,8);
        FUN_14042e00(param_2[4],param_2[2]);
        break;
      case 0x62:
        if (*(short *)(param_2 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_14040134,DAT_1404012c);
        }
        bVar1 = param_2[4];
        if (*(char *)(DAT_140400fc + (uint)bVar1 + 1) == '\0') {
          *(byte *)(DAT_140400fc + 0x11) = bVar1;
        }
        FUN_14041f98((uint)bVar1,0xd);
        FUN_14042e00(param_2[4],param_2[2]);
        break;
      case 100:
      case 0x65:
      case 0x67:
      case 0x69:
      case 0x6a:
      case 0x6b:
        FUN_14042e00(param_2[4],param_2[2]);
        break;
      case 0xa0:
        iVar3 = FUN_14041e80();
        if (iVar3 == 0) {
          FUN_140747b4(0,2);
          FUN_1403e660(1);
          FUN_1403e660(0);
          FUN_14044818();
        }
      }
    }
  }
  return 0;
}

