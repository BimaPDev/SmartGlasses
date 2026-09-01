/* FUN_100a4fc4 @ 0x100a4fc4 */

undefined4 FUN_100a4fc4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int local_1c [2];
  
  iVar2 = thunk_FUN_10112e84(DAT_100a50c0);
  uVar6 = (DAT_100a50c4 - DAT_100a50c8) * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100a50cc | uVar6,DAT_100a50d4,DAT_100a50d0);
LAB_100a4fea:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = 0;
    local_1c[0] = 0;
    FUN_1012da64(param_1,local_1c);
    FUN_100a5b78(DAT_100a50d8 | uVar6,DAT_100a50dc,DAT_100a50e0,local_1c[0]);
    piVar1 = DAT_100a50e4;
    piVar5 = DAT_100a50e4;
    do {
      if ((1 < piVar5[1]) && (*piVar5 == local_1c[0])) {
        if (piVar5[1] == 3) {
          iVar4 = thunk_FUN_10112e84(DAT_100a50f8);
          if (iVar4 == 0) {
            FUN_100a5b78(uVar6 | 0x2a40011,DAT_100a50dc,DAT_100a50fc);
          }
          else {
            iVar4 = (*(code *)**(undefined4 **)(iVar4 + 8))(iVar4,0);
            if (iVar4 == 0) {
              piVar1[iVar2 * 2 + 1] = 1;
              iVar2 = FUN_100a474c();
              if (iVar2 != 0) goto LAB_100a5062;
              break;
            }
            FUN_100a5b78(uVar6 | 0x2ac0011,DAT_100a50dc,DAT_100a50e8,iVar4);
          }
        }
        else {
          DAT_100a50e4[iVar2 * 2 + 1] = 1;
LAB_100a5062:
          iVar2 = thunk_FUN_1009efe8(DAT_100a50ec,DAT_100a50e4,400);
          if (-1 < iVar2) break;
          FUN_100a5b78(DAT_100a50f0 | uVar6,DAT_100a50dc,DAT_100a50f4,DAT_100a50ec,iVar2);
        }
        FUN_100a5b78(DAT_100a5100 | uVar6,DAT_100a50d4,DAT_100a5104,0xffffffff);
        goto LAB_100a4fea;
      }
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar2 != 0x19);
    FUN_10083358(param_1);
    uVar3 = 0;
  }
  return uVar3;
}

