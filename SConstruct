from glob import glob
import scons_compiledb

env = Environment(
    CPPPATH = ["."],
)

scons_compiledb.enable(env)
env.CompileDb()

fusion_srcs = glob('Fusion/*.c')
env.Program("imu_fusion", ["app/main.c", *fusion_srcs])