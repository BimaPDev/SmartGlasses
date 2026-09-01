/* FUN_1009ea24 @ 0x1009ea24 */

void FUN_1009ea24(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_4c [2];
  undefined1 local_4a;
  undefined1 *local_44;
  undefined4 uStack_40;
  undefined1 auStack_38 [28];
  
  uVar1 = DAT_1009eae0;
  puVar3 = (undefined4 *)*DAT_1009eac0;
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  puVar4 = (undefined4 *)*puVar3;
  do {
    if ((param_1 == 0) || (iVar2 = FUN_1011ea18(puVar3[1],param_1), iVar2 == 0)) {
      FUN_1011ea48(auStack_4c,0,0x14);
      FUN_1013ca1a(auStack_38,0,1);
      uStack_40 = uVar1;
      local_4a = param_2;
      local_44 = auStack_38;
      iVar2 = FUN_1009ece8(puVar3[1],auStack_4c);
      if (iVar2 == 0) {
        FUN_101150e0();
        return;
      }
      iVar2 = FUN_1011dbde(auStack_38,0xffffffff);
      if (iVar2 != 0) {
        FUN_100a5b78((DAT_1009eac8 - DAT_1009eac4) * 0x20 & 0xff00U | 0x1340011,DAT_1009ead0,
                     DAT_1009eacc,puVar3[1]);
                    /* WARNING: Subroutine does not return */
        FUN_10117c88(DAT_1009eadc,0x135,DAT_1009ead8,DAT_1009ead4);
      }
    }
    if (puVar4 == (undefined4 *)0x0) {
      return;
    }
    puVar3 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}

