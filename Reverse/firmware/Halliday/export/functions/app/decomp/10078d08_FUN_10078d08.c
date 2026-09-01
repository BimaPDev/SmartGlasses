/* FUN_10078d08 @ 0x10078d08 */

undefined4 FUN_10078d08(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint local_30;
  uint local_2c;
  
  if (param_2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar3 = FUN_1006bd24(param_1,param_2,0);
    puVar2 = DAT_10078e78;
    uVar7 = DAT_10078e74;
    uVar1 = DAT_10078e70;
    if (iVar3 == 0) {
      do {
        uVar4 = FUN_1006bc84(param_1,&local_30);
        if (uVar4 < 4) {
          FUN_10119dc2(PTR_s_invalid_image_10078e58);
          return 0xffffffea;
        }
        if (local_30 == 0) {
          return 0;
        }
        if (local_2c < 0x2000) {
          if (param_3 == 0) {
LAB_10078e06:
            iVar3 = local_2c + 0x17f98000;
          }
          else {
            iVar3 = local_2c + 0x1802c000;
          }
          goto LAB_10078d76;
        }
        if (local_2c - 0x10000 < 0x10000) {
          if (param_3 == 0) {
LAB_10078e3c:
            if (0x3bfff < (local_2c & uVar1) - 0x35000) goto LAB_10078d7c;
            iVar3 = (local_2c & uVar1) + 0x17ff0000;
            goto LAB_10078d76;
          }
          iVar3 = -0x1000000;
        }
        else {
          if (local_2c < 0xc000) {
            if (param_3 == 0) goto LAB_10078e06;
            goto LAB_10078e3c;
          }
          if (local_2c + 0xc0000000 < 0x3c000) {
            iVar3 = local_2c + 0xd7ff0000;
          }
          else {
            if (0x3fff < local_2c + 0xbff00000) goto LAB_10078e3c;
            iVar3 = local_2c + 0xd7e8c000;
          }
LAB_10078d76:
          iVar3 = iVar3 * 2;
          if (iVar3 == -1) {
LAB_10078d7c:
            FUN_10119dc2(PTR_s_invalid_address_0x_08x_10078e60);
            return 0xfffffff2;
          }
        }
        uVar5 = FUN_1006bd74(param_1);
        iVar8 = iVar3;
        FUN_10119dc2(uVar7,uVar5,local_30,local_2c,iVar3);
        if (DAT_10078e64 < iVar3 + 0xd0020000U) {
          *puVar2 = *puVar2 & 0xfffffffe;
        }
        else {
          *DAT_10078e68 = *DAT_10078e68 & 0xffafffff;
        }
        uVar6 = FUN_1006bc84(param_1,iVar3,local_30);
        uVar4 = DAT_10078e64;
        if (iVar3 + 0xd0020000U <= DAT_10078e64) {
          uVar4 = *DAT_10078e68 | 0x500000;
          *DAT_10078e68 = uVar4;
        }
      } while (local_30 <= uVar6);
      FUN_10119dc2(DAT_10078e6c,uVar6,local_30,uVar4,iVar8);
    }
    else {
      FUN_10119dc2(PTR_s_seek_file_failed_10078e5c);
    }
    uVar7 = 0xfffffffb;
  }
  return uVar7;
}

