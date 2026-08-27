/* FUN_2c479518 @ 0x2c479518 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c479518(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = _LAB_2c479588;
  if (_LAB_2c479588[1] == '\t') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x92,_LAB_2c479598,_LAB_2c479594,_LAB_2c479590,_LAB_2c47958c);
    }
    FUN_2c6741e8(0x711,_LAB_2c47959c,_LAB_2c47958c);
    if ('\x02' < (char)puVar1[2]) {
      FUN_2c47bbc0(0);
      FUN_2c674268(puVar1,0,0xe1b8);
      *puVar1 = 0xff;
      return;
    }
    FUN_2c46ddf8(puVar1 + 0xcd7f,*(undefined2 *)(puVar1 + 0xcf80),0x1b);
    puVar1[2] = puVar1[2] + '\x01';
  }
  return;
}

