/* FUN_2c6589e8 @ 0x2c6589e8 */

undefined4 * FUN_2c6589e8(undefined4 *param_1)

{
  *param_1 = DAT_2c658a1c;
  FUN_2c6589ac(param_1,0);
  FUN_2c6589c6(param_1);
  if ((undefined4 *)param_1[0x1a] != param_1 + 9) {
    if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
      thunk_FUN_2c669588();
    }
    param_1[0x1a] = 0;
  }
  FUN_2c64cebc(param_1 + 0x1b);
  return param_1;
}

