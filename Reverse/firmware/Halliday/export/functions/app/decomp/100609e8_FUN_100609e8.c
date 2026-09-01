/* FUN_100609e8 @ 0x100609e8 */

void FUN_100609e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_c;
  undefined2 uStack_a;
  
  _local_c = CONCAT22((short)((uint)param_4 >> 0x10),0xff00);
  FUN_10060908(0xda,1,&local_c,1,1,param_2,param_3);
  _local_c = CONCAT31(stack0xfffffff5,0xff);
  FUN_1011c09e(*(undefined4 *)(DAT_10060a1c + 4),&local_c,1,0x44);
  return;
}

