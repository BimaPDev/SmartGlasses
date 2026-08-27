/* FUN_2c59db68 @ 0x2c59db68 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59db68(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x108);
  uVar1 = *(uint *)(param_1 + 0xfc);
  uVar3 = uVar1;
  if (0 < (int)uVar2) {
    uVar3 = (uint)(param_2 * 100) / uVar2;
  }
  if ((param_3 != 1) && (99 < (int)uVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c59dc7c,0x556,_LAB_2c59dc78,_LAB_2c59dc74,uVar2,99,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c59dc7c,0x556,_LAB_2c59dc78,_LAB_2c59dc74,uVar2,uVar3,uVar1);
}

