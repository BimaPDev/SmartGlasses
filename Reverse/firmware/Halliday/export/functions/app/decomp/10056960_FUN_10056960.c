/* FUN_10056960 @ 0x10056960 */

undefined4 FUN_10056960(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_10056994;
  uVar2 = *DAT_10056994;
  *DAT_10056994 = uVar2 & 0xffffff39 | 0x780;
  *puVar1 = uVar2 & 0xffffff39 | 0x781;
  do {
  } while (-1 < (int)*puVar1);
  *param_1 = *DAT_10056998;
  *param_2 = *DAT_1005699c;
  *puVar1 = *puVar1 & 0xfffffffe;
  return 0;
}

