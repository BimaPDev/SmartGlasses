/* FUN_2c629df4 @ 0x2c629df4 */

undefined4 FUN_2c629df4(void)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = DAT_2c629e0c;
  uVar2 = *DAT_2c629e08;
  do {
    *pcVar1 = '\x01';
  } while (*pcVar1 == '\0');
  return uVar2;
}

