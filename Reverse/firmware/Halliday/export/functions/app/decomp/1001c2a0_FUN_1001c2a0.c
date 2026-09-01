/* FUN_1001c2a0 @ 0x1001c2a0 */

void FUN_1001c2a0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_3c;
  undefined1 auStack_38 [36];
  int local_14;
  
  local_14 = *(int *)PTR_DAT_1001c314;
  local_3c = 0;
  FUN_1011ea48(auStack_38,0,0x24,0);
  uVar1 = thunk_FUN_1009efa0(PTR_DAT_1001c318,&local_3c,0x28);
  uVar2 = 0;
  if ((int)uVar1 < 1) goto LAB_1001c306;
  FUN_1011ea40(param_1,&local_3c,uVar1);
  uVar3 = ((int)PTR_DAT_1001c31c - (int)PTR_DAT_1001c320) * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | 0x6a0032,PTR_s_sn_get_1001c328,PTR_s_sn_get___s_len__d_1001c324,&local_3c,
               uVar1);
  uVar2 = uVar1 & 0xff;
  while( true ) {
    if (*(int *)PTR_DAT_1001c314 == local_14) break;
    FUN_1013cdc0(uVar2);
    uVar2 = uVar3;
LAB_1001c306:
    FUN_1001c1d0();
    uVar3 = uVar2;
  }
  return;
}

