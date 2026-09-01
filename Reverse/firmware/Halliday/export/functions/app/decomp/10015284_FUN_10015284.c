/* FUN_10015284 @ 0x10015284 */

void FUN_10015284(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_10015328;
  iVar1 = FUN_10015208(param_1,DAT_1001532c,param_3,0,param_1);
  if (iVar1 == 0) goto LAB_100152aa;
  do {
    uVar2 = 0x15;
    while( true ) {
      if (*DAT_10015328 == iVar3) {
        return;
      }
      FUN_1013cdc0(uVar2);
LAB_100152aa:
      iVar1 = FUN_10015208(param_1,DAT_10015330);
      if (iVar1 != 0) break;
      iVar1 = FUN_10015208(param_1,DAT_10015334);
      if (iVar1 == 0) {
        iVar1 = FUN_10015208(param_1,DAT_10015338);
        if (((iVar1 == 0) && (iVar1 = FUN_10015208(param_1,DAT_1001533c), iVar1 == 0)) &&
           (iVar1 = FUN_10015208(param_1,DAT_10015340), iVar1 == 0)) {
          iVar1 = FUN_10015208(param_1,DAT_10015344);
          if (iVar1 == 0) {
            iVar1 = FUN_10015208(param_1,DAT_10015348);
            if (iVar1 == 0) {
              iVar1 = FUN_10015208(param_1,DAT_1001534c);
              if ((iVar1 == 0) && (iVar1 = FUN_10015208(param_1,DAT_10015350), iVar1 == 0)) {
                uVar2 = 0;
              }
              else {
                uVar2 = 4;
              }
            }
            else {
              uVar2 = 2;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 3;
      }
    }
  } while( true );
}

