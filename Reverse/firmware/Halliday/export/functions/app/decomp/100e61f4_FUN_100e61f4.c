/* FUN_100e61f4 @ 0x100e61f4 */

void FUN_100e61f4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  char acStack_38 [20];
  
  FUN_100e6120(0xffffffff,0xffffffff);
  iVar2 = FUN_100e5da8(param_1,param_2);
  if (iVar2 == 0) {
    FUN_100a5b78(DAT_100e6308 | (DAT_100e6300 - DAT_100e6304) * 0x20 & 0xff00U,DAT_100e630c);
  }
  else {
    iVar8 = *(int *)(iVar2 + 4);
    bVar9 = *(byte *)(iVar2 + 0xe) + 1 & 0xf;
    *(byte *)(iVar2 + 0xe) = *(byte *)(iVar2 + 0xe) & 0xf0 | bVar9;
    if (iVar8 == 0) {
      bVar7 = 0;
    }
    else {
      uVar4 = 0;
      bVar7 = 0;
      while( true ) {
        uVar3 = uVar4 & 0xff;
        if (*(char *)(iVar8 + uVar3) == '\0') break;
        if (*(char *)(iVar8 + uVar3) == '/') {
          if (uVar3 != 0) {
LAB_100e62a4:
            bVar7 = bVar7 + 1;
          }
        }
        else if (uVar3 == 0) goto LAB_100e62a4;
        uVar4 = uVar4 + 1;
      }
    }
    if (bVar7 < bVar9) {
      *(byte *)(iVar2 + 0xe) = *(byte *)(iVar2 + 0xe) | 0x10;
      FUN_10138ace(iVar2,2);
    }
    else {
      if (iVar8 != 0) {
        uVar3 = 0;
        uVar4 = 0;
        bVar7 = 0;
        uVar10 = (DAT_100e6300 - DAT_100e6304) * 0x20 & 0xff00U | DAT_100e6314;
        uVar5 = DAT_100e6310;
        while( true ) {
          uVar6 = uVar3 & 0xff;
          cVar1 = *(char *)(iVar8 + uVar6);
          if ((cVar1 == '\0') || (bVar9 == 0)) break;
          if (cVar1 == '/') {
            if (uVar6 != 0) {
              bVar7 = bVar7 + 1;
            }
          }
          else {
            if (uVar6 == 0) {
              bVar7 = bVar7 + 1;
            }
            if (bVar9 == bVar7) {
              if (uVar4 < 0xf) {
                acStack_38[uVar4] = cVar1;
                uVar4 = uVar4 + 1 & 0xff;
              }
              else {
                FUN_100a5b78(uVar10,uVar5);
                uVar5 = DAT_100e6310;
              }
            }
          }
          uVar3 = uVar3 + 1;
        }
        acStack_38[uVar4] = '\0';
      }
      FUN_100e5de0(iVar2,acStack_38);
    }
  }
  FUN_100e6114();
  return;
}

