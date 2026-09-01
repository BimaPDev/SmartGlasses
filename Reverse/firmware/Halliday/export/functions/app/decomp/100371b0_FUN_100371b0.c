/* FUN_100371b0 @ 0x100371b0 */

void FUN_100371b0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r6;
  
  iVar2 = *DAT_1003723c;
  if ((int)param_1 < 0) {
LAB_1003722e:
    if (*DAT_1003723c == iVar2) {
      return;
    }
LAB_1003720e:
    FUN_1013cdc0();
  }
  else {
    unaff_r6 = *DAT_10037240;
    if (*(uint *)(unaff_r6 + 0x34) <= param_1) goto LAB_1003722e;
    iVar3 = unaff_r6 + 0x204;
    FUN_10138e6a(iVar3,1,param_3,*(uint *)(unaff_r6 + 0x34),param_1);
    iVar1 = FUN_100e96f4(unaff_r6 + 0x28,param_1,param_1,iVar3);
    if (iVar1 == 0) {
      if (*DAT_1003723c == iVar2) goto LAB_10037214;
      goto LAB_1003720e;
    }
    FUN_100a5b78(((int)PTR_DAT_10037248 - (int)PTR_DAT_10037244) * 0x20 & 0xff00U | 0x5b0011,
                 PTR_s__load_element_resource_10037250,PTR_s_fail_to_load_pic__d_1003724c,param_1);
    if (*DAT_1003723c != iVar2) goto LAB_1003720e;
  }
  iVar3 = 0;
LAB_10037214:
  FUN_10096730(*(undefined4 *)(unaff_r6 + 4),iVar3);
  return;
}

