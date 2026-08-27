/* FUN_14002c48 @ 0x14002c48 */

longlong FUN_14002c48(undefined4 param_1,uint param_2)

{
  int extraout_r1;
  uint in_stack_0000000c;
  
  if ((*puRam14002cf4 ^ in_stack_0000000c) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  FUN_14003370(0,param_2,*puRam14002cf4 ^ in_stack_0000000c,0);
  return CONCAT44(extraout_r1 + 0xbc,DAT_14002cfc);
}

