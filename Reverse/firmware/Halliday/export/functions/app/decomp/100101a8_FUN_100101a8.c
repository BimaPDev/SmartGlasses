/* FUN_100101a8 @ 0x100101a8 */

void FUN_100101a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint extraout_r1;
  int iVar4;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  
  iVar4 = *DAT_1001028c;
  puVar2 = (undefined4 *)thunk_FUN_1009f30c(0x100,DAT_10010290,param_3,0);
  if (puVar2 == (undefined4 *)0x0) {
    iVar6 = 1;
    goto LAB_100101f0;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  uVar3 = (uint)*(ushort *)(param_1 + 6);
  if (uVar5 != 0x7161) {
    if (0x7161 < uVar5) goto LAB_100101fe;
    if (uVar5 != 0x5441) {
      if (uVar5 == 0x7061) {
        FUN_100100ac();
        goto LAB_10010240;
      }
      do {
        iVar6 = 7;
LAB_100101e8:
        while( true ) {
          while( true ) {
            FUN_1012d1f4(puVar2);
            param_1 = iVar6;
LAB_100101f0:
            if (*DAT_1001028c == iVar4) {
              return;
            }
            FUN_1013cdc0(iVar6);
            uVar3 = extraout_r1;
            uVar5 = extraout_r3;
LAB_100101fe:
            puVar1 = DAT_10010294;
            if (uVar5 != 0x7361) break;
            iVar6 = FUN_1001016c();
            if (iVar6 == 0) {
              FUN_100119bc(*(undefined1 *)puVar2,*(undefined1 *)((int)puVar2 + 1),puVar2 + 1);
            }
          }
          if (uVar5 != 0x7761) break;
          *DAT_10010294 = *DAT_10010294 & 0xffafffff;
          puVar1[1] = puVar1[1] & 0xfffffffe;
          uVar5 = FUN_100b63f0(0x1040000,uVar3,5000);
          if (uVar5 == uVar3) {
            FUN_10010848(0x1040000,uVar5,*(undefined4 *)(param_1 + 8));
LAB_10010240:
            iVar6 = 0;
          }
          else {
            iVar6 = 1;
          }
        }
      } while( true );
    }
    iVar6 = FUN_100100d8(uVar3);
    goto LAB_100101e8;
  }
  iVar6 = FUN_1001016c();
  if (iVar6 != 0) goto LAB_100101e8;
  FUN_10010064(*puVar2,puVar2[1]);
  goto LAB_100101e8;
}

