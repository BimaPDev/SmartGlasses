/* FUN_1011c0c6 @ 0x1011c0c6 */

void FUN_1011c0c6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_4;
  if (param_1 == 0) {
    FUN_10060e60();
    local_c = CONCAT22(local_c._2_2_,0xff01);
    FUN_10060908(0xda,1,&local_c,1,1,param_2,param_3);
  }
  else if (param_1 == 1) {
    FUN_100609e8();
  }
  return;
}

