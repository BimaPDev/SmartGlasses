/* FUN_101327da @ 0x101327da */

void FUN_101327da(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_100c1fe4(param_1,2);
  *puVar1 = (char)((uint)param_2 >> 8);
  puVar1[1] = (char)param_2;
  return;
}

