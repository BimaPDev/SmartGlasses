/* FUN_1001ad14 @ 0x1001ad14 */

void FUN_1001ad14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_38 [2];
  char local_36;
  int local_30;
  code *local_2c;
  int local_24;
  
  local_24 = *DAT_1001aec0;
  piVar4 = (int *)thunk_FUN_1009f30c(0x50,DAT_1001aec4,param_3,0);
  uVar10 = (DAT_1001aec8 - DAT_1001aecc) * 0x20 & 0xff00;
  piVar8 = piVar4;
  if (piVar4 != (int *)0x0) goto LAB_1001ad5e;
  FUN_100a5b78(DAT_1001aed0 | uVar10,DAT_1001aed8,DAT_1001aed4);
  do {
    FUN_1009e6b4(DAT_1001aedc);
LAB_1001ad4e:
    if (*DAT_1001aec0 == local_24) {
      return;
    }
    piVar4 = (int *)FUN_1013cdc0();
LAB_1001ad5e:
    FUN_1011ea48(piVar4,0,0x50);
    uVar7 = DAT_1001aee0;
    *(undefined1 *)((int)piVar8 + 5) = 0xff;
    *(undefined1 *)((int)piVar8 + 6) = 0xff;
    iVar5 = FUN_100bfd64(uVar7);
    *piVar8 = iVar5;
    if (iVar5 != 0) {
      FUN_1013c856(piVar8 + 0xf);
      FUN_101164a0(piVar8 + 8,DAT_1001aee8,piVar8);
      uVar3 = DAT_1001aef4;
      puVar2 = DAT_1001aef0;
      uVar7 = DAT_1001aed8;
      uVar6 = DAT_1001aeec | uVar10;
      *DAT_1001aef0 = piVar8;
      FUN_100a5b78(uVar6,uVar7,uVar3);
      uVar6 = DAT_1001af14;
      uVar11 = uVar10 | DAT_1001af10;
      do {
        uVar7 = FUN_10116640();
        piVar8 = (int *)FUN_1012d0fc(auStack_38,uVar7);
        if (piVar8 != (int *)0x0) {
          if (local_36 == '\x04') {
            puVar9 = (undefined4 *)*puVar2;
            *(undefined1 *)((int)puVar9 + 6) = 0xff;
            FUN_1001ac40(puVar9);
            FUN_10116598(puVar9 + 8);
            if ((int)((uint)*(byte *)(puVar9 + 1) << 0x1f) < 0) {
              FUN_100a0a70(*puVar9);
            }
            FUN_100a0b00(*puVar9);
            FUN_1012d1f4(puVar9);
            uVar3 = DAT_1001aefc;
            uVar7 = DAT_1001aef8;
            *puVar2 = 0;
            FUN_100a5b78(uVar11,uVar3,uVar7);
            FUN_1009e6b4(DAT_1001aedc);
          }
          else {
            if (local_36 == -0x38) {
              puVar9 = (undefined4 *)*puVar2;
              bVar1 = *(byte *)(puVar9 + 1);
              piVar8 = (int *)(bVar1 & 1);
              if (local_30 == 0) {
                if ((bVar1 & 1) == 0) goto LAB_1001ae1e;
                FUN_100a0a70(*puVar9);
                *(byte *)(puVar9 + 1) = *(byte *)(puVar9 + 1) & 0xfc;
                *(undefined1 *)((int)puVar9 + 6) = 0xff;
                FUN_1001ac40(puVar9);
                FUN_10116598(puVar9 + 8);
                FUN_1011aabe(0);
                FUN_100a5b78(uVar10 | uVar6,DAT_1001af08,DAT_1001af0c);
              }
              else if ((bVar1 & 1) == 0) {
                iVar5 = FUN_100a03c0(*puVar9,3);
                if (iVar5 == 0) {
                  *(byte *)(puVar9 + 1) = *(byte *)(puVar9 + 1) | 1;
                  FUN_10116500(puVar9 + 8,0x32);
                }
                FUN_1011aab8(0);
                FUN_100a5b78(DAT_1001af00 | uVar10,DAT_1001af08,DAT_1001af04,iVar5);
              }
            }
            piVar8 = (int *)0x0;
          }
LAB_1001ae1e:
          if (local_2c != (code *)0x0) {
            (*local_2c)(auStack_38,0);
          }
          if (piVar8 != (int *)0x0) goto LAB_1001ad4e;
        }
        FUN_10116668();
      } while( true );
    }
    FUN_100a5b78(uVar10 | 0x3380011,DAT_1001aed8,DAT_1001aee4);
    FUN_1012d1f4(piVar8);
  } while( true );
}

