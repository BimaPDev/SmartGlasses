/* FUN_1001bc64 @ 0x1001bc64 */

void FUN_1001bc64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = DAT_1001bcdc;
  iVar4 = *DAT_1001bcd8;
  uVar5 = ((int)PTR_DAT_1001bce0 - (int)PTR_DAT_1001bce4) * 0x20 & 0xff00;
  if (*DAT_1001bcdc != 0) goto LAB_1001bcb2;
  iVar2 = FUN_100ed61c(2,0xc356,PTR_s_alloc_vcard_mem_1001bce8,0,param_1,iVar4,param_3);
  *piVar1 = iVar2;
  if (iVar2 != 0) goto LAB_1001bcb2;
  FUN_100a5b78(DAT_1001bcec | uVar5,PTR_s_alloc_vcard_mem_1001bcf4,PTR_s_pbap_alloc_error_1001bcf0);
  uVar3 = 0;
  while( true ) {
    if (*DAT_1001bcd8 == iVar4) break;
    FUN_1013cdc0(uVar3);
LAB_1001bcb2:
    FUN_1011ea48(*piVar1,0,0xc356);
    FUN_100a5b78(uVar5 | 0x10c0031,PTR_s_alloc_vcard_mem_1001bcf4,PTR_s_pbap_have_mem_1001bcf8);
    uVar3 = 1;
  }
  return;
}

