/* FUN_2c517448 @ 0x2c517448 */

/* WARNING: Removing unreachable block (ram,0x2c51746e) */
/* WARNING: Removing unreachable block (ram,0x2c517476) */
/* WARNING: Removing unreachable block (ram,0x2c517484) */
/* WARNING: Removing unreachable block (ram,0x2c51748c) */
/* WARNING: Removing unreachable block (ram,0x2c607e44) */
/* WARNING: Removing unreachable block (ram,0x2c607e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c517448(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5174f4,0x51,_LAB_2c5174ec,_LAB_2c5174f8);
  }
  if (*(char *)(param_1 + 0xc0) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5174f4,0x54,_LAB_2c5174ec,_LAB_2c5174f0);
  }
  if ((*(char *)(param_1 + 0xbe) != '\0') && (*(char *)(param_1 + 200) == '\0')) {
    *(undefined1 *)(param_1 + 200) = 1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    FUN_2c62e8ec(param_1 + 8);
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}

