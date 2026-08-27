/* FUN_2c5e72cc @ 0x2c5e72cc */

undefined2 FUN_2c5e72cc(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  if (param_1 == 6) {
    uVar2 = param_2 - 1U & 0xff;
    if (2 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5e7358,0x268,DAT_2c5e7354,DAT_2c5e7350,param_2);
    }
    uVar1 = *(undefined2 *)(DAT_2c5e734c + uVar2 * 2);
  }
  else {
    switch(param_1) {
    case 1:
      uVar1 = 1;
      break;
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
      break;
    case 4:
      uVar1 = 8;
      break;
    case 5:
      uVar1 = 0x10;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5e7358,0x284,DAT_2c5e7354,DAT_2c5e7350,param_1);
    case 7:
      uVar1 = 0x100;
      break;
    case 8:
      uVar1 = 0x200;
    }
  }
  return uVar1;
}

