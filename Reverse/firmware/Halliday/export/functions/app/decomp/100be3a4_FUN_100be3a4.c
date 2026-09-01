/* FUN_100be3a4 @ 0x100be3a4 */

void FUN_100be3a4(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_44 [16];
  short local_34;
  char local_32;
  int local_2c;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  
  if (param_2 == 0) {
    iVar2 = FUN_10131bde(param_1,&local_34);
    piVar1 = DAT_100be4d4;
    if (((-1 < iVar2) && (local_34 == 0x101)) && (local_32 == '\0')) {
      uVar3 = (DAT_100be4c4 - DAT_100be4c0) * 0x20 & 0xff00;
      if (*DAT_100be4d4 == 0) {
        *(undefined1 *)((int)DAT_100be4d4 + 0x111) = 0;
        piVar1[1] = *(int *)(local_2c + 1);
        *(undefined2 *)(piVar1 + 2) = *(undefined2 *)(local_2c + 5);
        FUN_1011ea48(auStack_44,0,0xd);
        FUN_10119cd2(piVar1 + 1,6,auStack_44,0xc);
        FUN_100a5b78(DAT_100be4d8 | uVar3,DAT_100be4d0,
                     PTR_s_Ble_connected_MAC___s_inv__d_lat_100be4dc,auStack_44,local_20,local_1e,
                     local_1c);
        FUN_100be38c(2);
        FUN_1011dc0a(piVar1 + 0x20,200);
        iVar2 = FUN_1013199c(param_1);
        *piVar1 = iVar2;
        *(undefined2 *)((int)piVar1 + 0x16) = 0;
        *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) & 0x87 | 8;
        *(undefined1 *)((int)piVar1 + 0xf) = 2;
        *(undefined2 *)((int)piVar1 + 0x12) = 0xff;
        *(undefined2 *)(piVar1 + 6) = local_20;
        *(undefined2 *)((int)piVar1 + 0x1a) = local_20;
        *(undefined2 *)(piVar1 + 7) = local_1e;
        *(undefined2 *)((int)piVar1 + 0x1e) = local_1c;
        FUN_100be38c();
        FUN_1011dc0a(piVar1 + 0x2c,0);
        FUN_1011dc0a(piVar1 + 8,4000);
        FUN_10131da6(param_1,PTR_LAB_100be1e0_1_100be4e0);
      }
      else {
        FUN_100a5b78(uVar3 | 0x2dc0011,DAT_100be4d0,PTR_s_Already_connected_100be4e4);
      }
    }
  }
  else {
    FUN_100a5b78(DAT_100be4c8 | (DAT_100be4c4 - DAT_100be4c0) * 0x20 & 0xff00U,DAT_100be4d0,
                 DAT_100be4cc,param_2);
  }
  return;
}

