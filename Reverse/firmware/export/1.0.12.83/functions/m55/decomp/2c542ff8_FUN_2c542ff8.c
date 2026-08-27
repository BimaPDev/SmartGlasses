/* FUN_2c542ff8 @ 0x2c542ff8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c542ff8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [16];
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [76];
  undefined4 uStack_1c;
  
  puStack_8c = auStack_84;
  uStack_1c = *_LAB_2c543178;
  puStack_70 = auStack_68;
  auStack_84[0] = 0;
  uStack_6c = 0;
  auStack_68[0] = 0;
  uStack_74 = 2000;
  uStack_88 = 0;
  switch(param_3) {
  case 0:
    FUN_2c542e64(&puStack_8c,0,0,_LAB_2c543190,4);
    break;
  case 1:
    FUN_2c542e64(&puStack_8c,0,0,_DAT_2c543194,0xc);
    break;
  default:
    FUN_2c542e64(&puStack_8c,0,0,_DAT_2c543180,6);
    break;
  case 3:
    FUN_2c542e64(&puStack_8c,0,0,_DAT_2c543198,0xc);
    break;
  case 5:
    FUN_2c542e64(&puStack_8c,0,0,_LAB_2c54319c,4);
    break;
  case 7:
    FUN_2c542e64(&puStack_8c,0,0,_LAB_2c5431a0,0xf);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

