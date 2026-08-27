/* FUN_2c6416a4 @ 0x2c6416a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c6416a4(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined1 *puStack_1c;
  int iStack_14;
  
  piVar1 = _LAB_2c6418ec;
  iStack_14 = *_LAB_2c6418f0;
  uVar2 = FUN_2c644324(&iStack_20,*_LAB_2c6418ec,0,0);
  if (iStack_20 == 0x20) {
    if (puStack_1c == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x14,_LAB_2c6418fc,_LAB_2c6418f8,_LAB_2c6418f4);
    }
    switch(*puStack_1c) {
    case 0:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x1b,_LAB_2c6418fc,_LAB_2c641938,puStack_1c + 4);
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x20,_LAB_2c6418fc,_LAB_2c641930,puStack_1c + 4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x25,_LAB_2c6418fc,_LAB_2c641928);
    case 3:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x2a,_LAB_2c6418fc,_LAB_2c641924);
    case 4:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x2e,_LAB_2c6418fc,_LAB_2c641920);
    case 5:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x32,_LAB_2c6418fc,_LAB_2c64191c);
    case 6:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x37,_LAB_2c6418fc,_LAB_2c641918);
    case 7:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x3c,_LAB_2c6418fc,_LAB_2c641914);
    case 8:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x41,_LAB_2c6418fc,_LAB_2c641910);
    case 9:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c641900,0x47,_LAB_2c6418fc,_LAB_2c641908);
    case 10:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c641900,0x4d,_LAB_2c6418fc,_LAB_2c641904);
    case 0xb:
      FUN_2c5dc748(*(undefined4 *)(puStack_1c + 8));
      break;
    case 0xc:
      func_0x2c469a1c();
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,_LAB_2c641900,0x57,_LAB_2c6418fc,_LAB_2c641940,_LAB_2c6418fc);
    }
    if (*_LAB_2c6418f0 == iStack_14) {
      if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
        return 0xfffffffc;
      }
      if (puStack_1c == (undefined1 *)0x0) {
        return 0xffffff81;
      }
      uVar2 = FUN_2c647824(*(undefined4 *)*piVar1);
      return uVar2;
    }
  }
  else if (*_LAB_2c6418f0 == iStack_14) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

