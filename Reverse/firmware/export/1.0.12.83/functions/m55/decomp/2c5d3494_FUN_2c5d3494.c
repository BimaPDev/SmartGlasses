/* FUN_2c5d3494 @ 0x2c5d3494 */

void FUN_2c5d3494(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xe0)) {
  case 1:
    FUN_2c608808(param_2,*(undefined4 *)(param_1 + 0x94),0xd,0,8);
    return;
  case 2:
    FUN_2c608808(param_2,*(undefined4 *)(param_1 + 0x94),0xf,0,8);
    return;
  case 3:
    FUN_2c608808(param_2,*(undefined4 *)(param_1 + 0x94),10,0,0xfffffff8);
    return;
  case 4:
    FUN_2c608808(param_2,*(undefined4 *)(param_1 + 0x94),0xc,0,0xfffffff8);
  }
  return;
}

