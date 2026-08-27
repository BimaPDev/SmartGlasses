/* FUN_2c5c6d94 @ 0x2c5c6d94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c6d94(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_3c [8];
  char local_34 [8];
  char local_2c [8];
  char local_24 [8];
  undefined1 uStack_1c;
  char local_1b;
  undefined4 local_14;
  
  local_14 = *_LAB_2c5c6e58;
  FUN_2c5c55d8();
  uVar1 = FUN_2c5c59bc();
  FUN_2c5e9058(local_3c);
  if (local_3c[0] != '\b') {
    FUN_2c5e9058(local_34);
    if (local_34[0] != '\x02') {
      FUN_2c5e9058(local_2c);
      if (local_2c[0] != '\a') {
        FUN_2c5e9058(local_24);
        if (local_24[0] != '\x03') {
          FUN_2c5e9058(&uStack_1c);
          if (local_1b != '\x02') {
            uVar3 = FUN_2c5c871c(param_1 + 0x298);
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(4,_LAB_2c5c6e64,0x252,_LAB_2c5c6e60,_LAB_2c5c6e5c,uVar1,1,uVar3);
          }
        }
      }
    }
  }
  uVar3 = _LAB_2c5c6e5c;
  uVar2 = FUN_2c5c871c(param_1 + 0x298);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c6e64,0x252,_LAB_2c5c6e60,uVar3,uVar1,0,uVar2);
}

