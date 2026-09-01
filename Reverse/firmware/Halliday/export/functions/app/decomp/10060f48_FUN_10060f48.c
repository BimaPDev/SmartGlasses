/* FUN_10060f48 @ 0x10060f48 */

undefined4 FUN_10060f48(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = FUN_10060e18();
  if (iVar1 == 0) {
LAB_10060f50:
    uVar2 = 0;
  }
  else {
    local_c = CONCAT22(local_c._2_2_,0xffff);
    FUN_1011c09e(*(undefined4 *)(DAT_10060f90 + 4),&local_c,1,0x44,param_1);
    sVar3 = 0x65;
    do {
      iVar1 = FUN_10060e18();
      if (iVar1 == 0) goto LAB_10060f50;
      sVar3 = sVar3 + -1;
      FUN_1011c098(10);
    } while (sVar3 != 0);
    FUN_101188d0(DAT_10060f94);
    uVar2 = 1;
  }
  return uVar2;
}

