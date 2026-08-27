/* FUN_2c4df506 @ 0x2c4df506 */

bool FUN_2c4df506(uint *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 & ~*param_1) != 0;
  if (bVar1) {
    *param_1 = *param_1 | param_2;
  }
  return !bVar1;
}

