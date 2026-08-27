/* FUN_2c6685ec @ 0x2c6685ec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c6685ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_2c66860c != 0) {
    FUN_2c66ef00(param_1,0,param_3,DAT_2c66860c,param_4);
  }
  if (*(code **)(*DAT_2c668610 + 0x28) != (code *)0x0) {
    (**(code **)(*DAT_2c668610 + 0x28))();
  }
  FUN_2c4e67d0(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

