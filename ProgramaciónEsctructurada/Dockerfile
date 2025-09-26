# Este es el stage de compilación
FROM gcc:latest AS builder
WORKDIR /app
COPY . .
RUN g++ -static -o programa2 elementosBasicos.cpp

#Este es el stage para correr la aplicación
FROM ubuntu:latest AS runner
WORKDIR /app
COPY --from=builder /app/programa2 .
CMD ["./programa2"]